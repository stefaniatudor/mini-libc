// SPDX-License-Identifier: BSD-3-Clause

#include <string.h>

char *strcpy(char *destination, const char *source)
{
	/* TODO: Implement strcpy(). */

	int i = 0;
	for (; source[i] != '\0'; i++) {
		destination[i] = source[i];
	}
	destination[i] = '\0';

	return destination;
}

char *strncpy(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncpy(). */

	int i = 0;
	for (; i < len && source[i] != '\0'; i++) {
		destination[i] = source[i];
	}
		destination[i] = '\0';

	return destination;
}

char *strcat(char *destination, const char *source)
{
	/* TODO: Implement strcat(). */

	int i = 0, j = 0;
	for (; destination[i] != '\0'; i++) {
	}
	for (; source[j] != '\0'; j++) {
		destination[i + j] = source[j];
	}
	destination[i + j] = '\0';

	return destination;
}

char *strncat(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncat(). */

	int i = 0, j = 0;
	for (; destination[i] != '\0'; i++) {
	}
	for (; j < len && source[j] != '\0'; j++) {
		destination[i + j] = source[j];
	}
	destination[i + j] = '\0';

	return destination;
}

int strcmp(const char *str1, const char *str2)
{
	/* TODO: Implement strcmp(). */

	int i = 0;
	for (; str1[i] != '\0' && str2[i] != '\0'; i++) {
		if (str1[i] < str2[i]) {
			return -1;
		} else if (str1[i] > str2[i]) {
			return 1;
		}
	}
	if (str1[i] == '\0' && str2[i] == '\0') {
		return 0;
	} else if (str1[i] == '\0') {
		return -1;
	} else {
		return 1;
	}
	
	return -1;
}

int strncmp(const char *str1, const char *str2, size_t len)
{
.
	return -1;
}

size_t strlen(const char *str)
{
	size_t i = 0;

	for (; *str != '\0'; str++, i++)
		;

	return i;
}

char *strchr(const char *str, int c)
{
	/* TODO: Implement strchr(). */
	return NULL;
}

char *strrchr(const char *str, int c)
{
	/* TODO: Implement strrchr(). */
	return NULL;
}

char *strstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strstr(). */
	return NULL;
}

char *strrstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strrstr(). */
	return NULL;
}

void *memcpy(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memcpy(). */
	return destination;
}

void *memmove(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memmove(). */
	return destination;
}

int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	/* TODO: Implement memcmp(). */
	return -1;
}

void *memset(void *source, int value, size_t num)
{
	/* TODO: Implement memset(). */
	return source;
}
