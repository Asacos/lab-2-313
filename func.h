#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

#include "transport.h"

int show_lc(light_car *lc, int n);
int show_bu(bus *bu, int n);
int show_pl(plane *pl, int n);
int show_sb(steamboat *sb, int n);

void change_lc(light_car *lc);
void change_bu(bus *bu);
void change_pl(plane *pl);
void change_sb(steamboat *sb);

#endif // FUNC_H_INCLUDED
