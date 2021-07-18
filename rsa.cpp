#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string.h>
using namespace std;
int x, y, n, t, i, flag;
long int e[50], d[50], temp[50], j;
char en[50], m[50];
char msg[100];

void encrypt()
{
    long int pt, ct, key = e[0], k, len;
    i = 0;
    len = strlen(msg);
    while (i != len)
    {
        pt = m[i];
        pt = pt - 96;
        k = 1;
        for (j = 0; j < key; j++)
        {
            k = k * pt;
            k = k % n;
        }
        temp[i] = k;
        ct = k + 96;
        en[i] = ct;
        i++;
    }
    en[i] = -1;
    // cout << "Encrypted";
    for (i = 0; en[i] != -1; i++)
    {
        cout << en[i];
    }
}
int main()
{
    cout << "Enter message";
    cin >> msg;
    for(i=0;msg[i] != NULL; i++){
        m[i] = msg[i];
    }
    encrypt();

    return 0;
}