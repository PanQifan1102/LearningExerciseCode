# message = {'姓名': ['大春', '马冬梅', '孟特', '秋雅', '夏洛'],
#            '年龄': [27, 17, 19, 29, 36],
#            '性别': ['男', '女', '男', '女', '男']
#            }
# _sum = 0
# for i in message['年龄']:
#     _sum += i
# ave = _sum / 5
# print(ave)

# lst = ["python", [1, 2, {"k1": "value", "k2": ["age", "name"], "k3":(111, 222, 333)}, 4]]
# print(lst[1][2]["k2"])
# lst[1][2]["k2"].append("address")
# print(lst)

# li = ["python", "java", ["c++", ["html", "javascript"], "all"], 111, 222]
# print(li[2][1][1])

linux = ['马冬梅', '夏洛', '秋雅', '大春', '袁华', '孟特', '张扬']
python = ['田雨', '那英', '周华健', '大春', '夏洛']
# 使用循环的方式，得到只报名linux，而没有报名python的学生列表
# for i in linux:
#     for j in python:
#         if i == j:
#             linux.remove(i)
# print(linux)
#请按写出既报名linux又报名python的学生列表的推导式
# both = []
# for i in linux:
#     for j in python:
#         if i == j:
#             both.append(i)
# print(both)

#使用上述列表内容，重新生成一个字典，要求用学生名做key，报名的课程做值结果形如：{ '大春' : ['linux','python'],  '田雨' : ['python'] }
student = {}
for i in linux:
    student[i] = ['linux']
for j in python:
    student[j] = ['python']
both = []
for i in linux:
    for j in python:
        if i == j:
            both.append(i)
for j in both:
    student[j] = ['linux', 'python']
print(student)
