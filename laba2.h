typedef struct Products{
char name[40];
int price;
int term;
}Products;
void create(Products**arr, int *n);
void read(Products**arr, int *n); 
void write(Products*arr, int n); 
void search(Products*arr, int n);
