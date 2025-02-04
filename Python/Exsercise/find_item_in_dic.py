# data = [
#     {"nama" : "Budi" , "nilai" : 90},
#     {"nama" : "Andi" , "nilai" : 80},
#     {"nama" : "Tono" , "nilai" : 95},
#     {"nama" : "Rizqi" , "nilai" : 70},
#     {"nama" : "Jo" , "nilai" : 85},
# ]

# output = {"max_value": 0 , "name_max_value": "" , "min_value": 101 , "name_min_value": ""}

# for dict in data:
#     if dict["nilai"] > output["max_value"]:
#         output["max_value"] = dict["nilai"]
#         output["name_max_value"] = dict["nama"]
#     if dict["nilai"] < output["min_value"]:
#         output["min_value"] = dict["nilai"]
#         output["name_min_value"] = dict["nama"]

# print(output)

input = [
    {"nama" : "Budi", "gaji" : 5000},
    {"nama" : "Dwi", "gaji" : 8000},
    {"nama" : "Joko", "gaji" : 6000},
]

output = {"highest_salary" : "" , "total_salary" : 0}

temp_highest_salary = 0
for dict in input:
    if dict["gaji"] > temp_highest_salary:
        temp_highest_salary = dict["gaji"]
        output["highest_salary"] = dict["nama"]
    output["total_salary"] += dict["gaji"]

print(output)