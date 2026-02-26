/*

Show how to replace a continue statement by an equivalent goto statement

-> you can do that by making goto with a null statement

for (int i = 0; i < 10; i++)
{
    if (i == 5) 
        goto placeholder;
'
    placeholder: ;
}
s
    
*/