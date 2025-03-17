#include <stdio.h>
#include <string.h>

typedef char String[50];

int main()
{

    String a = "rider kamen ";
    String b = "miso ramen ";
    String c = {'T', 'A', 'M', 'A', '\0', 'G', 'O', '\0'};

    String List[100], Table[50][50];
    char *Data[100];
    char *ptr;

    // Given the codes above, give the codes for the ff. questions.

    // 1. last array element of c
    c[49];
    // 2. third string in List - must use dereference operator
    *(List + 2);
    // 3. last string in Table
    Table[49][49];
    // 4. 2nd character in the last string of List
    List[99][1];
    // 5. 3rd character in the first string of Table
    Table[0][0][2];
    // 6. length of the tenth string in List - must use dereference operator
    strlen(*(List + 9));
    // 7.  copy the 3rd character of b as the 4th character of a - must use dereference operator
    *(a + 3) = *(b + 2);
    // 8. copy the 1st string in List as the last string in Table
    strcpy(Table[49][49], List[0]);
    // 9. append string b to the ninth string in List
    strcat(List[8], b);
    // 10. assign to integer variable named temp the result of the comparison between the last string of List with the first string on the sixth row of Table
    int temp = strcmp(List[99], Table[5][0]);
    
    return 0;
}
