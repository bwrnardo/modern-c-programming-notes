bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
        else
            return false; // remove else statement
    
    // return false; after the loop end
}
/*

this function will return false immediately after element 0 isn't a 0, so the elements after that will be ignored
a solution is to put the return statement after the for loop has ended without return true meaning it doesnt have a zero

*/