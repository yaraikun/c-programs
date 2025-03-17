#include <stdio.h>
#include <string.h>

#include "palengke.h"

int IsExist(char *filename)
{
    FILE *fp;
    fp = fopen(filename, "r");
    if (fp != NULL) {
        fclose(fp);
        return 1;
    } else {
        return 0;
    }
}

int ReadFile(char *filename, itemType ITEMS[])
{
    FILE *fp;
    int ctr;
    Str15 temp_name;
    float temp_price;

    // I'd just write this function like this. Check for error, then just early
    // return to avoid unnecessary nesting.

    if ( (fp = fopen(filename, "r")) == NULL ) {
        fprintf(stderr, "ERROR: File %s does not exist.\n", filename);
        fclose(fp);
        return -1;
    }

    ctr = 0;

    while (fscanf(fp, "%s %f", temp_name, &temp_price) == 2)
    {
        strcpy(ITEMS[ctr].name, temp_name);
        ITEMS[ctr++].price = temp_price;
    }

    fclose(fp);

    // if (IsExist(filename)) {
    //     ctr = 0;
    //     fp = fopen(filename, "r");

    //     while ( fscanf(fp, "%s %f", temp_name, &temp_price) == 2 ) {
    //         strcpy(ITEMS[ctr].name, temp_name);
    //         ITEMS[ctr++].price = temp_price;
    //     }

    //     fclose(fp);
    // } else {
    //     fprintf(stderr, "ERROR: File %s does not exist.\n", filename);
    // }

    return ctr;
}

void PrintItems(itemType ITEMS[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%s %.2f\n", ITEMS[i].name, ITEMS[i].price);
    }
}

int main()
{
    itemType ITEMS[MAX_ITEMS]; // 1D array of structures
    int count_items;
    char filename[20];

    count_items = 0;

    printf("Input the filename: ");
    scanf("%s", filename);

    count_items = ReadFile(filename, ITEMS);
    PrintItems(ITEMS, count_items);

    return 0;
}