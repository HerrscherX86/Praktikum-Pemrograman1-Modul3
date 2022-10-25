n=int(input('Inputkan Bilangan cacah dari 1-99 : '))

if (n>99) :
    print('Anda Menginput Melebihi Limit Bilangan')

elif ((n>=20) and (n<=99)) :
    print('Nilai',n,'yang anda inputkan merupakan bilangan puluhan')

elif ((n>=10) and (n<=19)) :
    print('Nilai',n,'yang anda inputkan merupakan bilangan belasan')

elif ((n>=1) and (n<=9)) :
    print('Nilai',n,'yang anda inputkan merupakan bilangan satuan')

else :
    print('Nilai',n,'yang anda inputkan merupakan bilangan nol')