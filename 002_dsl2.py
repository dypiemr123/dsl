# Write a Python program to store marks scored in subject “Fundamental of Data
# Structure” by
# N students in the class. Write functions to compute following:
# a) The average score of class
# b) Highest score and lowest score of class
# c) Count of students who were absent for the test
# d) Display mark with highest frequency

marklist = ["20","30","80","20","none"]

# n=int(input("Enter the number of students"))

# for i in range(n):
#     mark=int(input("Enter mark of student: "))
#     marklist.append(mark)

#calculate avg
total=0
for mark in marklist:
    total += mark
#calculate max and min
max_val=marklist[0]
min_val=marklist[0]

# for mark in marklist:
#     if max_val < mark:
#         max_val = mark
#     if min_val > mark:
#         min_val = mark

#absent student in exam
absent_student =0
for mark in marklist:
    if mark==None:
        absent_student +=1
    else:
        total+=mark
        if max_val < mark:
           max_val = mark
        if min_val > mark:
           min_val = mark
print("a) Average of students marks: ",total/len(marklist))
print("b) maximum marks:",max_val,"minimum marks:",min_val)
print("c) absent student:",absent_student)