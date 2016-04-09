f = open("sin_lut.txt", "r");

lut = f.read();
lut.replace("\n", "");
list = lut.split(",");
l_int = [];

for i in list:
    l_int.append(bin(int(i)));

str_list = [];

for i in l_int:
    str_list.append(str(i)[2:]);

strlist_padded = str_list;
j = 0;
for i in strlist_padded:
        l = len(i);
        while l < 16 : 
            strlist_padded[j] = "0" + i;
            l = l+1;
        j = j+1;
        

str_concat = '", \n"'.join(strlist_padded);

str_concat = str_concat.replace("'", '"');

f2 = open("sin_lut_vhdl.txt", "w");
f2.write(str_concat);

