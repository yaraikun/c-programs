#define MAX_ITEMS (20)

typedef char Str15[16];

struct itemTag {
    Str15 name;
    float price;
};

typedef struct itemTag itemType;