Program qsort;

Var 
  n,i: integer;
  a: array[0..10000] Of integer;

Procedure kp(l,r:integer);

Var 
  i,j,x: integer;
Begin
  If l<r Then
    Begin
      i := l;
      j := r;
      x := a[i];
      While i<j Do
        Begin
          While (i<j) And (a[j]>=x) Do
            j := j-1;
          a[i] := a[j];
          While (i<j) And (a[i]<=x) Do
            i := i+1;
          a[j] := a[i];
        End;
      a[i] := x;
      kp(l,i-1);
      kp(i+1,r);
    End;
End;

Begin
  readln(n);
  For i:=0 To n-1 Do
    readln(a[i]);
  kp(0,n-1);
  For i:=0 To n-1 Do
    writeln(a[i]);
End.
