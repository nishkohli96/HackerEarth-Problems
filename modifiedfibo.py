
# Modified fibonacci where t(n)=t(n-2)+(t(n-1) *t(n-1))
# input t1,t2 and n in the first line and print the nth term of the series.




qw=input();
arr=qw.split();
a=int(arr[0]);
b=int(arr[1]);
n=int(arr[2]);
count=3;

while count<=n :
    c=a+(b*b);
    a=b;
    b=c;
    count=count+1;

print(c);    
