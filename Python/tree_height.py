n=int(input())
a,height=[],[]
for i in range(n):
    a.append([])
    height.append(0)
root=0
p=list(map(int, input().split(" ")))
for i in range(n):
    if(p[i]==-1):
        root=i
        continue
    a[p[i]].append(i)
queue=[root]
h=0
while(queue!=[]):
    t=queue[0]
    queue.remove(t)
    for i in a[t]:
        height[i]=height[t]+1
        queue.append(i)
    h=height[t]+1
print(h)
    
