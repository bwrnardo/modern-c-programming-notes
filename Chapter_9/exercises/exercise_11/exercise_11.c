float compute_GPA(char grade[], int n)
{
    float avg = 0;
    for (int i = 0; i < n; i++) {
        switch (toupper(grade[i])) {
            case 'A': 
                avg += 4; break;
            case 'B':
                avg += 3; break;
            case 'C':
                avg += 2; break;
            case 'D':
                avg += 1; break;
            case 'F':
                avg += 0; break;
        }
    }
    return avg / n;
}