#include "main.h"

void is_elf(unsigned char *el);
void magic_num(unsigned char *el);
void class_display(unsigned char *el);
void data_display(unsigned char *el);
void print_version(unsigned char *el);

/**
 * is_elf - Checks if file is an ELF file.
 * @el: pointer to array with ELF magic numbers.
 * korir codes
 */
void is_elf(unsigned char *el)
{
	int x;

	for (x = 0; x < 4; x++)
	{
		if (el[x] != 127 &&
				el[x] != 'E' &&
				el[x] != 'L' &&
				el[x] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic_num - Prints magic numbers.
 * @el: pointer to array with magic numbers.
 * korir codes
 */
void magic_num(unsigned char *el)
{
	int x;

	printf("Magic:");

	for (x = 0; x < EI_NIDENT; x++)
	{
		printf("%02x", el[x]);

		if (x == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_display - Prints the class of an ELF header.
 * @el: pointer to array with the ELF class.
 * korir codes
 */
void class_display(unsigned char *el)
{
	printf("Class:");

	switch (el[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", el[EI_CLASS]);
	}
}

/**
 * data_display- Prints the data of an ELF header.
 * @el: A pointer to an array containing the ELF class.
 */
void data_display(unsigned char *el)
{
	printf("Data:");

	switch (el[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", el[EI_CLASS]);
	}
}

/**
 * print_version - Prints version of ELF header.
 * @el: pointer to array with the ELF version.
 * korir
 */
void print_version(unsigned char *el)
{
	printf("Version:%d",
			el[EI_VERSION]);

	switch (el[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
