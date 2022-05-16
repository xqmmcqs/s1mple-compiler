Program HelloWorld;

Var 
  n,i: integer;
  a: array[0..4] Of integer;
Procedure kp(l,r:integer);

Var 
  i,j,mid: integer;
Begin
  If l<r Then
    Begin
      i := l;
      j := r;
      mid := a[(l+r) / 2];
      Repeat
        While a[i]<mid Do
          i := i+1;
        While a[j]>mid Do
          j := j-1;
        If i<=j Then
          Begin
            a[0] := a[i];
            a[i] := a[j];
            a[j] := a[0];
            i := i+1;
            j := j-1;
          End;
      Until i>j;
      kp(l,j);
      kp(i,r)
    End;
End;
Begin
  n := 5;
  For i:=1 To n Do
    a[0] := 5;
  a[1] := 4;
  a[2] := 3;
  a[3] := 2;
  a[4] := 1;
  kp(1,n);
  For i:=1 To n Do
    writeln(a[i]);
End.
