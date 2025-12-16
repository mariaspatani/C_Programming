int a = 10;
int *p = &a;
*p = 20;
printf("%d", a);   // Output: 20 

/* Explanation :
 variable creation -> int a = 10;

Menory il store aavunnath?
  
Address      Value
0x1000  ---> 10  (0x1000 example address aanu; actual address change aakum)
step 2: pointer creation
int *p = &a;
      [-p oru pointer variable aanu
       -p il a-yude address store cheyyum]

Memory ippo:
      Address      Value
      0x1000  ---> 10        (a)
      0x2000  ---> 0x1000    (p)

step 3: printing
  printf("a = %d\n", a); output : a=10
  printf("&a = %p\n", &a); output : &a = 0x1000
  printf("p = %p\n", p); output :p contains address of a ,So p = &a
                                p = 0x1000(&a and p same value aanu)

printf("*p = %d\n", *p);
*p = value at address stored in p
p → 0x1000
Value at 0x1000 = 10
  Output : *p = 10

  Step 4: Pointer dereferencing & assignment
*p = 20;
  p = 0x1000
  *p = value at address 0x1000
  So compiler understands:
value_at_address(0x1000) = 20;
Address 0x1000 belongs to variable a
Address      Value
0x1000  ---> 20    (a changed)
0x2000  ---> 0x1000
printf("%d", a);a now contains 20

Why did a change?
Because:
p points to a
*p = 20 means
 “change the value at the address stored in p”
That address is a
->Changing *p changes the value of the variable that p points to.
->The pointer p stores the address of variable a. When *p is assigned a new value, 
  it modifies the value stored at that address, hence the value of a changes.

*/


  


  


  
  

