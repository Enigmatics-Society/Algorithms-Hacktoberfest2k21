import random

def partition3(a, l, r):
    l1=l
    l2=r
    pivot=a[l]
    i=l1+1
    while(i<=l2):
        if(a[i]<pivot):
            a[i],a[l1]=a[l1],a[i]
            l1+=1
            i+=1
        elif(a[i]>pivot):
            a[i],a[l2]=a[l2],a[i]
            l2-=1
        else:
            i+=1

    return (l1,l2)

def randomized_quick_sort(a, l, r):
    if l >= r:
        return
    k = random.randint(l, r)
    a[l], a[k] = a[k], a[l]
    m = partition3(a, l, r)
    randomized_quick_sort(a, l, m[0]-1)
    randomized_quick_sort(a, m[1]+1, r)

n=int(input())
a=list(map(int, input().split(" ")))
randomized_quick_sort(a, 0, n - 1)
for x in a:
    print(x, end=' ')
