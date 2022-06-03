; ModuleID = './test/test_ifThenElse.bc'
source_filename = "./test/test_ifThenElse.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@b = global i32 undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define void @main() {
entry:
  store i32 10, i32* @b, align 4
  %0 = load i32, i32* @b, align 4
  %1 = call i32 @testfun(i32 %0)
  store i32 %1, i32* @b, align 4
  %2 = load i32, i32* @b, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 %2)
  ret void
}

define i32 @testfun(i32 %n) {
Para_Ret:
  %0 = alloca i32, align 4
  %1 = alloca i32, align 4
  store i32 %n, i32* %1, align 4
  br label %entry

entry:                                            ; preds = %Para_Ret
  %2 = load i32, i32* %1, align 4
  %3 = icmp sgt i32 %2, 2
  br i1 %3, label %then, label %else

then:                                             ; preds = %entry
  %4 = load i32, i32* %1, align 4
  %5 = sub i32 %4, 1
  %6 = call i32 @testfun(i32 %5)
  %7 = load i32, i32* %1, align 4
  %8 = sub i32 %7, 2
  %9 = call i32 @testfun(i32 %8)
  %10 = add i32 %6, %9
  store i32 %10, i32* %0, align 4
  br label %if_end

if_end:                                           ; preds = %else, %then
  %11 = load i32, i32* %0, align 4
  ret i32 %11

else:                                             ; preds = %entry
  store i32 1, i32* %0, align 4
  br label %if_end
}

declare void @printf(i8* noalias, ...)
