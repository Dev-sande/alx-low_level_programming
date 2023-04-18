#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <elf.h>

#define ELF_MAGIC_NUM_BYTES 4

int check_elf(const unsigned char *magic) {
    for (int i = 0; i < ELF_MAGIC_NUM_BYTES; i++) {
        if (magic[i] != ELFMAG[i]) {
            return 0;
        }
    }
    return 1;
}

void print_magic(const unsigned char *magic) {
    printf("ELF magic number: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", magic[i]);
    }
    printf("\n");
}

void print_data(uint8_t data) {
    printf("Data encoding: ");
    switch (data) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Invalid data encoding\n");
            break;
    }
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s <ELF file>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "rb");
    if (fp == NULL) {
        printf("Error: could not open file %s\n", argv[1]);
        return 1;
    }

    unsigned char magic[EI_NIDENT];
    fread(magic, sizeof(unsigned char), EI_NIDENT, fp);

    if (!check_elf(magic)) {
        printf("Error: file %s is not an ELF file\n", argv[1]);
        fclose(fp);
        return 1;
    }

    printf("File %s is an ELF file\n", argv[1]);
    print_magic(magic);

    uint8_t data;
    fseek(fp, EI_DATA, SEEK_SET);
    fread(&data, sizeof(uint8_t), 1, fp);
    print_data(data);

    fclose(fp);
    return 0;
}

