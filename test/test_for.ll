; ModuleID = './test/test_for.bc'
source_filename = "./test/test_for.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@n = global i32 undef
@i = global i32 undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define void @main() {
entry:
  %0 = alloca i32, align 4
  store i32 5, i32* %0, align 4
  br label %while_count

while_count:                                      ; preds = %while_body, %entry
  %1 = load i32, i32* %0, align 4
  %2 = icmp sge i32 %1, 1
  br i1 %2, label %while_body, label %while_end

while_body:                                       ; preds = %while_count
  %3 = load i32, i32* %0, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 %3)
  %4 = load i32, i32* %0, align 4
  %5 = add i32 %4, -1
  store i32 %5, i32* %0, align 4
  br label %while_count

while_end:                                        ; preds = %while_count
  %6 = alloca i32, align 4
  store i32 1, i32* %6, align 4
  br label %while_count1

while_count1:                                     ; preds = %while_body2, %while_end
  %7 = load i32, i32* %6, align 4
  %8 = icmp sle i32 %7, 5
  br i1 %8, label %while_body2, label %while_end3

while_body2:                                      ; preds = %while_count1
  %9 = load i32, i32* %6, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 %9)
  %10 = load i32, i32* %6, align 4
  %11 = add i32 %10, 1
  store i32 %11, i32* %6, align 4
  br label %while_count1

while_end3:                                       ; preds = %while_count1
  ret void
}

declare void @printf(i8* noalias, ...)
