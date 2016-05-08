f = open("lut", "r");

list_of_vals = f.read();
f.close();

list_of_vals = list_of_vals.split();

list_of_vals = ",\n".join(list_of_vals);

f = open("lut", "w");
f.write(list_of_vals);
f.close();
