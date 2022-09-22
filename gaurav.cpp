def input1(a,n):
    for i in range (0,n):
     x=int(input ("enter ur fds marks"))
     a.append(x)
def display(a,n):
    for i in range (0,n):
        print (a[i])
def avg_marks(a,n):
    sum=0
    for num in a:
        sum=sum+num
    average=sum/n
    print("averge score is ",average)
def abs_count(a,n):
    ab=0 
    for i in a:
        if(i==00):
            ab=ab-1
    print("no of absent students are",ab)
def max_min(a,n):
    i=0
    max=0
    n=0
    for j in range(len(a)):
        c=0
        if(a[i]==a[j]):
            c=c+1
            if(max<c):
                max=c
                n=a[i]
    print("freq ofmax score:",max)
    print("marks with highest freq: ",n)
def main():
    a=[]
    n=int(input("enter total no. of students: "))
    input1(a,n)
    display(a,n)
    avg_marks(a,n)
    abs_count(a,n)
    max_min(a,n)
main()
    