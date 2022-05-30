; ModuleID = './test/HelloWorld.bc'
source_filename = "./test/HelloWorld.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@testconst = constant i32 10
@0 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1

define void @main() {
  %1 = alloca i32, align 4
  store i32 undef, i32* %1, align 4
  %2 = alloca i32, align 4
  store i32 undef, i32* %2, align 4
  %3 = alloca i32, align 4
  store i32 undef, i32* %3, align 4
  %4 = alloca i32, align 4
  store i32 1, i32* %4, align 4
  br label %while_count

while_count:                                      ; preds = %while_body, %0
  %5 = load i32, i32* %4, align 4
  %6 = icmp sle i32 %5, 100
  br i1 %6, label %while_body, label %while_end

while_body:                                       ; preds = %while_count
  %7 = load i32, i32* %4, align 4
  %8 = add i32 %7, 1
  store i32 %8, i32* %4, align 4
  br label %while_count

while_end:                                        ; preds = %while_count
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @0, i32 0, i32 0))
  ret void
}

declare void @printf(i8* noalias, ...)
