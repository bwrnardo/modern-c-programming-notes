double inner_product(double a[], double b[], int n) 
{
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += a[i] * b[i]; 
    }
    return result;
}