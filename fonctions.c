#include "fonctions.h"

#define MAX_PASSWORD_LENGTH 10
#define MAX_CHARSET_LENGTH 100
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <zip.h>

/** 
 * Afficher l'aide
 */
void print_help() {
    printf("Usage: ./zip [OPTION]... [FILE]...\n");
    printf("Options:\n");
    printf(" -h, --help                    Show this help\n");
    printf(" -o, --open                    Open a zip file for browsing\n");
    printf(" -b, --bruteforce              Try to bruteforce the password\n");
    printf(" -d, --dictionary=FILE         Try to bruteforce the password with a dictionary\n");
    printf(" -p, --password=PASSWORD       Use this password\n");
    printf(" -e, --extract=FILE            Extract this file\n");
    printf(" -i, --include=FILE            Include this file\n");
}