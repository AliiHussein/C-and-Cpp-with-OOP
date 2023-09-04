
//Just Write the below statements:

//1. Pointer to int.
uint8 *ptr;

//2. Pointer to pointer to int.
uint8 **pptr;

//3. Pointer to array of 10 element of int.
uint8 (*ptr)[10];

//4. Pointer to function which take 2 int and return void.
void func(uint8 a, uint8 b);
void (*ptr)(uint8, uint8) = &func;

//5. Array of 20 pointer to int.
uint8 *p[20];

//6. Array of 10 pointer to function.
void (*p[10])(uint8);

//7. Pointer to constant int.
uint8 const x;
uint8 const *p = &x;

//8. Pointer to constant pointer
uint8 *const p = &x;