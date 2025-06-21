#ifndef NETWEB_H
#define NETWEB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *html5_tags[];
int html5_length;

extern const char *html_tree[];
extern int html_length;

void scan_tags(tag);

#endif