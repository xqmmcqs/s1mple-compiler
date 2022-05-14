program HelloWorld;
var
    n,i:integer;
    a:array[0..4]of integer;
procedure kp(l,r:integer);
var
    i,j,mid:integer;
begin
        if l<r then begin
        i:=l;j:=r;mid:=a[(l+r) / 2];
        repeat
            while a[i]<mid do i:=i+1;
                while a[j]>mid do j:=j-1;
                        if i<=j then
                        begin
                                a[0]:=a[i];a[i]:=a[j];a[j]:=a[0];
                                i:=i+1;j:=j-1;
                        end;
        until i>j;
    kp(l,j);
    kp(i,r)
        end;
end;
begin
    n:=5;
    for i:=1 to n do
    a[0]:=5;
    a[1]:=4;
    a[2]:=3;
    a[3]:=2;
    a[4]:=1;
    kp(1,n);
    for i:=1 to n do
    writeln(a[i]);
end.
