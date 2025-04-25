#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdbool.h>

// PROTOTIPOS
void ClearBuffer();
void GetName(char *name, int size);
void GetTickets(int *tickets);
void GetProduct(int *product, int opc);
void GetTotalPerUser(int *totalPerUser, int *data, int rows, int columns);
void GetTotal(int *total, int *data, int rows, int columns);
void ShowInfo(char *users, int *totalPerUser, int *data, int *total, int rows, int columns, int size);

#endif // FUNCIONES_H