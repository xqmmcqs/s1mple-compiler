; ModuleID = './test/test_while.bc'
source_filename = "./test/test_while.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@a = global i32 undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define void @main() {
entry:
  store i32 10, i32* @a, align 4
  br label %while_count

while_count:                                      ; preds = %while_body, %entry
  %0 = load i32, i32* @a, align 4
  %1 = icmp slt i32 %0, 20
  br i1 %1, label %while_body, label %while_end

while_body:                                       ; preds = %while_count
  %2 = load i32, i32* @a, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 %2)
  %3 = load i32, i32* @a, align 4
  %4 = add i32 %3, 5
  store i32 %4, i32* @a, align 4
  br label %while_count

while_end:                                        ; preds = %while_count
  ret void
}

declare void @printf(i8* noalias, ...)
