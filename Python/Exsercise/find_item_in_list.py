input = [200,300,500,500,600]
compare = [200,700,900]

for i in range(len(compare)):
    if compare[i] in input:
        compare[i] = 1
    else:
        compare[i] = 0

print(compare)