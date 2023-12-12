'''Write a Python program to store first year percentage of students in array. Write
function forsorting array of floating point numbers in ascending order using
a) Selection Sort
b) Bubble sort and display top five scores'''
def SlectionSort(arr):
    for i in range(len(arr)):
        minindex=i
        for j in range (i+1,len(arr)):
            if(arr[j]<arr[minindex]):
                minindex=j
        arr[i],arr[minindex]=arr[minindex],arr[i]
    return arr

def BubbleS(arr):
    n=len(arr)
    for i in range(n-1):
        for j in range(0,n-i-1):
            if(arr[j]>arr[j+1]):
                arr[j],arr[j+1]=arr[j+1],arr[j]
    return arr

def Display(scores,top_n=5):
    top_scores=scores[-top_n:][::-1]
    print(" Top 5 scores ")
    for i,score in enumerate(top_scores,1):
        print(f"{i}.{score}")

ch=int(input("Enter:"))
lst=[]
for i in range(ch):
    no=int(input("enter marks"))
    lst.append(no)
print(lst)
a=SlectionSort(lst)
Display(a)
b=BubbleS(lst)
Display(b)