
//  B)  B:|
void update(int *a,int *b) {
    // Complete this function
    int temp = *a + *b;
    if(*a > *b){
        *b = *a - *b;
    }
    else{
        *b = *b - *a;
    }
    *a = temp;       
}
