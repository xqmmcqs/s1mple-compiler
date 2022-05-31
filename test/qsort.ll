; ModuleID = './test/qsort.bc'
source_filename = "./test/qsort.pas"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@n = global i32 undef
@i = global i32 undef
@a = global [10001 x i32] undef
@0 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@1 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@2 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define void @main() {
entry:
  %0 = load i32, i32* @n, align 4
  call void (i8*, ...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i32 0, i32 0), i32* @n)
  %1 = load i32, i32* @n, align 4
  %2 = sub i32 %1, 1
  %3 = alloca i32, align 4
  store i32 0, i32* %3, align 4
  br label %while_count

while_count:                                      ; preds = %while_body, %entry
  %4 = load i32, i32* %3, align 4
  %5 = icmp sle i32 %4, %2
  br i1 %5, label %while_body, label %while_end

while_body:                                       ; preds = %while_count
  %6 = load i32, i32* %3, align 4
  %7 = sub i32 %6, 0
  %8 = mul i32 %7, 1
  %9 = add i32 0, %8
  %10 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %9
  %11 = load i32, i32* %10, align 4
  %12 = load i32, i32* %3, align 4
  %13 = sub i32 %12, 0
  %14 = mul i32 %13, 1
  %15 = add i32 0, %14
  %16 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %15
  call void (i8*, ...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @1, i32 0, i32 0), i32* %16)
  %17 = load i32, i32* %3, align 4
  %18 = add i32 %17, 1
  store i32 %18, i32* %3, align 4
  br label %while_count

while_end:                                        ; preds = %while_count
  %19 = load i32, i32* @n, align 4
  %20 = sub i32 %19, 1
  call void @kp(i32 0, i32 %20)
  %21 = load i32, i32* @n, align 4
  %22 = sub i32 %21, 1
  %23 = alloca i32, align 4
  store i32 0, i32* %23, align 4
  br label %while_count1

while_count1:                                     ; preds = %while_body2, %while_end
  %24 = load i32, i32* %23, align 4
  %25 = icmp sle i32 %24, %22
  br i1 %25, label %while_body2, label %while_end3

while_body2:                                      ; preds = %while_count1
  %26 = load i32, i32* %23, align 4
  %27 = sub i32 %26, 0
  %28 = mul i32 %27, 1
  %29 = add i32 0, %28
  %30 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %29
  %31 = load i32, i32* %30, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @2, i32 0, i32 0), i32 %31)
  %32 = load i32, i32* %23, align 4
  %33 = add i32 %32, 1
  store i32 %33, i32* %23, align 4
  br label %while_count1

while_end3:                                       ; preds = %while_count1
  ret void
}

define void @kp(i32 %l, i32 %r) {
Para_Ret:
  %0 = alloca i32, align 4
  store i32 %l, i32* %0, align 4
  %1 = alloca i32, align 4
  store i32 %r, i32* %1, align 4
  br label %entry

entry:                                            ; preds = %Para_Ret
  %2 = alloca i32, align 4
  store i32 undef, i32* %2, align 4
  %3 = alloca i32, align 4
  store i32 undef, i32* %3, align 4
  %4 = alloca i32, align 4
  store i32 undef, i32* %4, align 4
  %5 = load i32, i32* %0, align 4
  %6 = load i32, i32* %1, align 4
  %7 = icmp slt i32 %5, %6
  br i1 %7, label %then, label %if_end

then:                                             ; preds = %entry
  %8 = load i32, i32* %0, align 4
  store i32 %8, i32* %2, align 4
  %9 = load i32, i32* %1, align 4
  store i32 %9, i32* %3, align 4
  %10 = load i32, i32* %2, align 4
  %11 = sub i32 %10, 0
  %12 = mul i32 %11, 1
  %13 = add i32 0, %12
  %14 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %13
  %15 = load i32, i32* %14, align 4
  store i32 %15, i32* %4, align 4
  br label %while_count

if_end:                                           ; preds = %while_end, %entry
  ret void

while_count:                                      ; preds = %while_end6, %then
  %16 = load i32, i32* %2, align 4
  %17 = load i32, i32* %3, align 4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %while_body, label %while_end

while_body:                                       ; preds = %while_count
  br label %while_count1

while_end:                                        ; preds = %while_count
  %19 = load i32, i32* %4, align 4
  %20 = load i32, i32* %2, align 4
  %21 = sub i32 %20, 0
  %22 = mul i32 %21, 1
  %23 = add i32 0, %22
  %24 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %23
  store i32 %19, i32* %24, align 4
  %25 = load i32, i32* %0, align 4
  %26 = load i32, i32* %2, align 4
  %27 = sub i32 %26, 1
  call void @kp(i32 %25, i32 %27)
  %28 = load i32, i32* %2, align 4
  %29 = add i32 %28, 1
  %30 = load i32, i32* %1, align 4
  call void @kp(i32 %29, i32 %30)
  br label %if_end

while_count1:                                     ; preds = %while_body2, %while_body
  %31 = load i32, i32* %2, align 4
  %32 = load i32, i32* %3, align 4
  %33 = icmp slt i32 %31, %32
  %34 = load i32, i32* %3, align 4
  %35 = sub i32 %34, 0
  %36 = mul i32 %35, 1
  %37 = add i32 0, %36
  %38 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %37
  %39 = load i32, i32* %38, align 4
  %40 = load i32, i32* %4, align 4
  %41 = icmp sge i32 %39, %40
  %42 = and i1 %33, %41
  br i1 %42, label %while_body2, label %while_end3

while_body2:                                      ; preds = %while_count1
  %43 = load i32, i32* %3, align 4
  %44 = sub i32 %43, 1
  store i32 %44, i32* %3, align 4
  br label %while_count1

while_end3:                                       ; preds = %while_count1
  %45 = load i32, i32* %3, align 4
  %46 = sub i32 %45, 0
  %47 = mul i32 %46, 1
  %48 = add i32 0, %47
  %49 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %48
  %50 = load i32, i32* %49, align 4
  %51 = load i32, i32* %2, align 4
  %52 = sub i32 %51, 0
  %53 = mul i32 %52, 1
  %54 = add i32 0, %53
  %55 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %54
  store i32 %50, i32* %55, align 4
  br label %while_count4

while_count4:                                     ; preds = %while_body5, %while_end3
  %56 = load i32, i32* %2, align 4
  %57 = load i32, i32* %3, align 4
  %58 = icmp slt i32 %56, %57
  %59 = load i32, i32* %2, align 4
  %60 = sub i32 %59, 0
  %61 = mul i32 %60, 1
  %62 = add i32 0, %61
  %63 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %62
  %64 = load i32, i32* %63, align 4
  %65 = load i32, i32* %4, align 4
  %66 = icmp sle i32 %64, %65
  %67 = and i1 %58, %66
  br i1 %67, label %while_body5, label %while_end6

while_body5:                                      ; preds = %while_count4
  %68 = load i32, i32* %2, align 4
  %69 = add i32 %68, 1
  store i32 %69, i32* %2, align 4
  br label %while_count4

while_end6:                                       ; preds = %while_count4
  %70 = load i32, i32* %2, align 4
  %71 = sub i32 %70, 0
  %72 = mul i32 %71, 1
  %73 = add i32 0, %72
  %74 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %73
  %75 = load i32, i32* %74, align 4
  %76 = load i32, i32* %3, align 4
  %77 = sub i32 %76, 0
  %78 = mul i32 %77, 1
  %79 = add i32 0, %78
  %80 = getelementptr [10001 x i32], [10001 x i32]* @a, i32 0, i32 %79
  store i32 %75, i32* %80, align 4
  br label %while_count
}

declare void @scanf(i8* noalias, ...)

declare void @printf(i8* noalias, ...)
