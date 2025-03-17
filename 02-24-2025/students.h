// this is a header file

#define MAX_STUDENTS (45)
typedef char Str15[16];

// DECLARE a student struct data type
// NOTE: we're declaring a data type NOT a variable

struct studentTag {   // studentTag is the tag name (optional)
    int id_number;    // 1st member of the struct data type
    Str15 first_name; // 2nd member of the struct data type
    Str15 last_name;  // 3rd member of the struct data type
    float grade;      // 4th member of the struct data type
};