program HelloWorld;
const a=4;
const b=3.1415;
const c='HelloWorld!';
var i,j:integer;
s:array [-5..90,-5..90] of integer;

procedure biggerThanS_I_J_sub(n:integer);
begin
    if n>2 then writeln(1)
    else writeln(0);
end;

procedure biggerThanS_I_J(n:integer);
var i,j:integer;
s:array [-5..90,-5..90] of integer;
begin
    i:=8;
    j:=2;
    s[i,j]:=i/j;
    biggerThanS_I_J_sub(5);
    biggerThanS_I_J_sub(3);
end;

begin
    i:=8;
    j:=2;
    s[i,j]:=i/j;{s[8,2]=4}
    writeln(2.0/8.0);
end.