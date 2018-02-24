enum type_number { possitive, negative, all };
enum sortirovka { ubivanie, vozrastanie };

int sluch_number(type_number tn, int start, int end);
void massiv(int *a, int r, int start, int end, type_number tn);
void print_massiv(int *a, int r);
void sort(int*a, int r, sortirovka k);
int even_num(int a);
int prost(int a);
int max_num(int *a, int r);
void sum_arr(int*a, int *b, int *c, int r);
int happy_ticket(int *a, int r);
int perfect_number(int n);
void stick_massive(int *a, int *b, int n, int m, int *c);
void general_elements(int *a, int n, int *b, int m, int *c);
void different_elements(int *a, int n, int *b, int m, int *c);
