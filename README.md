## Selection Test 1
### Problem Statement

Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).

### Input
```c
int A, B, C, D;
// take input
scanf("%d %d %d %d", &A, &B, &C, &D);
```
### Check condition:
```c
 if ((B > C) && (D > A) && ((C + D) > (A + B)) && D > 0 && A % 2 == 0)
    {   
        // 
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
```