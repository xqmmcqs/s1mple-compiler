program HelloWorld;
var n,i:integer;
a,b,c:real;
s:array [-5..90,-5..90] of real;
begin
    n:=6;
    i:=2;
    a:=3.43;
    b:=-239.98;
    c:=b/a;
    s[i,n]:=(a*b);
    writeln(s[i,n]);
   { for i:=1 to n do writeln(1);}
end.