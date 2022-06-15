#simple strings
# msg='pinapple'
# print(msg)
# print(len(msg))
# print(min(msg))
# print(max(msg))
# s='The Terrible Tiger Tore The Towel'
# pos=s.find('T',0)
# print(pos,s[pos])
# pos=s.find('T',pos+1)
# print(pos,s[pos])
# c=s.count('T')
# s=s.replace('T','l',c)
# print(s)

# s='Shenanigan'
# print(s[0],s[1])
# print(s[8],s[9])
# print(s[::-1])
# print(s[0:10:4])
# print(s+'Type')
# print(s[0:6]+'Wabbite')

# s1=s2=s3="Hello"
# print(id(s1),id(s2),id(s3))

# msg='Aeroplane is my favourite'
# ch=msg[-0]
# print(ch)

a,b,c=10,20,30
res=all((a>5,b>19,c>15))
print(res)
res=any((a>5,b>20,c>15))
print(res)
