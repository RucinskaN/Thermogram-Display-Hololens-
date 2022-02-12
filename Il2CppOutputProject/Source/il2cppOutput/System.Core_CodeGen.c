#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000020 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000028 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000029 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002B System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002D System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000031 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000032 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000033 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000040 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000042 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000044 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004B System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004E System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000050 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000052 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000053 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000054 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000056 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000059 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005C TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005E System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000060 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000061 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000062 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000063 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000065 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000067 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x00000068 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006B System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006C System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000006E TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000074 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000075 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000078 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007A System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007C System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x0000007E System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x0000007F System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000081 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000083 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000084 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000085 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000086 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x00000087 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x00000088 System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x00000089 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008A TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000008C System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x0000008D System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000008E System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008F System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000090 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000091 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000092 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000093 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000094 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000095 System.Void System.Linq.Set`1::Resize()
// 0x00000096 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000097 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000098 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000099 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009A System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009B System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000009E System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000009F TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A0 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A1 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A2 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A3 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A4 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A5 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A6 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A7 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000A8 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000A9 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AA System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AB System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AC System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AD TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000AE System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000AF System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B1 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B3 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B5 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000B6 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000B8 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000B9 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BA System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000BD System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C4 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C5 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000C7 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000C8 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000C9 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CA System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CB System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[203] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[203] = 
{
	6386,
	6386,
	6608,
	6608,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6289,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[66] = 
{
	{ 0x02000004, { 96, 4 } },
	{ 0x02000005, { 100, 9 } },
	{ 0x02000006, { 111, 7 } },
	{ 0x02000007, { 120, 10 } },
	{ 0x02000008, { 132, 11 } },
	{ 0x02000009, { 146, 9 } },
	{ 0x0200000A, { 158, 12 } },
	{ 0x0200000B, { 173, 1 } },
	{ 0x0200000C, { 174, 2 } },
	{ 0x0200000D, { 176, 12 } },
	{ 0x0200000E, { 188, 8 } },
	{ 0x0200000F, { 196, 11 } },
	{ 0x02000010, { 207, 12 } },
	{ 0x02000011, { 219, 12 } },
	{ 0x02000012, { 231, 6 } },
	{ 0x02000013, { 237, 2 } },
	{ 0x02000015, { 239, 8 } },
	{ 0x02000017, { 247, 3 } },
	{ 0x02000018, { 252, 5 } },
	{ 0x02000019, { 257, 7 } },
	{ 0x0200001A, { 264, 3 } },
	{ 0x0200001B, { 267, 7 } },
	{ 0x0200001C, { 274, 4 } },
	{ 0x0200001D, { 278, 23 } },
	{ 0x0200001F, { 301, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 1 } },
	{ 0x06000019, { 56, 2 } },
	{ 0x0600001A, { 58, 4 } },
	{ 0x0600001B, { 62, 4 } },
	{ 0x0600001C, { 66, 4 } },
	{ 0x0600001D, { 70, 3 } },
	{ 0x0600001E, { 73, 3 } },
	{ 0x0600001F, { 76, 1 } },
	{ 0x06000020, { 77, 1 } },
	{ 0x06000021, { 78, 3 } },
	{ 0x06000022, { 81, 3 } },
	{ 0x06000023, { 84, 2 } },
	{ 0x06000024, { 86, 2 } },
	{ 0x06000025, { 88, 5 } },
	{ 0x06000026, { 93, 3 } },
	{ 0x06000037, { 109, 2 } },
	{ 0x0600003C, { 118, 2 } },
	{ 0x06000041, { 130, 2 } },
	{ 0x06000047, { 143, 3 } },
	{ 0x0600004C, { 155, 3 } },
	{ 0x06000051, { 170, 3 } },
	{ 0x0600009A, { 250, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[303] = 
{
	{ (Il2CppRGCTXDataType)2, 6422 },
	{ (Il2CppRGCTXDataType)3, 24880 },
	{ (Il2CppRGCTXDataType)2, 10168 },
	{ (Il2CppRGCTXDataType)2, 9458 },
	{ (Il2CppRGCTXDataType)3, 42672 },
	{ (Il2CppRGCTXDataType)2, 7075 },
	{ (Il2CppRGCTXDataType)2, 9488 },
	{ (Il2CppRGCTXDataType)3, 42716 },
	{ (Il2CppRGCTXDataType)2, 9471 },
	{ (Il2CppRGCTXDataType)3, 42688 },
	{ (Il2CppRGCTXDataType)2, 6423 },
	{ (Il2CppRGCTXDataType)3, 24881 },
	{ (Il2CppRGCTXDataType)2, 10199 },
	{ (Il2CppRGCTXDataType)2, 9501 },
	{ (Il2CppRGCTXDataType)3, 42732 },
	{ (Il2CppRGCTXDataType)2, 7101 },
	{ (Il2CppRGCTXDataType)2, 9527 },
	{ (Il2CppRGCTXDataType)3, 42874 },
	{ (Il2CppRGCTXDataType)2, 9514 },
	{ (Il2CppRGCTXDataType)3, 42797 },
	{ (Il2CppRGCTXDataType)2, 1131 },
	{ (Il2CppRGCTXDataType)3, 114 },
	{ (Il2CppRGCTXDataType)3, 115 },
	{ (Il2CppRGCTXDataType)2, 3647 },
	{ (Il2CppRGCTXDataType)3, 15518 },
	{ (Il2CppRGCTXDataType)2, 1132 },
	{ (Il2CppRGCTXDataType)3, 124 },
	{ (Il2CppRGCTXDataType)3, 125 },
	{ (Il2CppRGCTXDataType)2, 3662 },
	{ (Il2CppRGCTXDataType)3, 15525 },
	{ (Il2CppRGCTXDataType)3, 47763 },
	{ (Il2CppRGCTXDataType)2, 1172 },
	{ (Il2CppRGCTXDataType)3, 301 },
	{ (Il2CppRGCTXDataType)3, 47769 },
	{ (Il2CppRGCTXDataType)2, 1180 },
	{ (Il2CppRGCTXDataType)3, 337 },
	{ (Il2CppRGCTXDataType)2, 7726 },
	{ (Il2CppRGCTXDataType)3, 33911 },
	{ (Il2CppRGCTXDataType)2, 7727 },
	{ (Il2CppRGCTXDataType)3, 33912 },
	{ (Il2CppRGCTXDataType)3, 20386 },
	{ (Il2CppRGCTXDataType)3, 47703 },
	{ (Il2CppRGCTXDataType)2, 1135 },
	{ (Il2CppRGCTXDataType)3, 167 },
	{ (Il2CppRGCTXDataType)3, 47805 },
	{ (Il2CppRGCTXDataType)2, 1183 },
	{ (Il2CppRGCTXDataType)3, 360 },
	{ (Il2CppRGCTXDataType)3, 47720 },
	{ (Il2CppRGCTXDataType)2, 1161 },
	{ (Il2CppRGCTXDataType)3, 259 },
	{ (Il2CppRGCTXDataType)2, 1469 },
	{ (Il2CppRGCTXDataType)3, 2726 },
	{ (Il2CppRGCTXDataType)3, 2727 },
	{ (Il2CppRGCTXDataType)2, 7076 },
	{ (Il2CppRGCTXDataType)3, 26949 },
	{ (Il2CppRGCTXDataType)3, 47727 },
	{ (Il2CppRGCTXDataType)2, 1164 },
	{ (Il2CppRGCTXDataType)3, 273 },
	{ (Il2CppRGCTXDataType)2, 5545 },
	{ (Il2CppRGCTXDataType)2, 3910 },
	{ (Il2CppRGCTXDataType)2, 4150 },
	{ (Il2CppRGCTXDataType)2, 4464 },
	{ (Il2CppRGCTXDataType)2, 5546 },
	{ (Il2CppRGCTXDataType)2, 3911 },
	{ (Il2CppRGCTXDataType)2, 4151 },
	{ (Il2CppRGCTXDataType)2, 4465 },
	{ (Il2CppRGCTXDataType)2, 5547 },
	{ (Il2CppRGCTXDataType)2, 3912 },
	{ (Il2CppRGCTXDataType)2, 4152 },
	{ (Il2CppRGCTXDataType)2, 4466 },
	{ (Il2CppRGCTXDataType)2, 4153 },
	{ (Il2CppRGCTXDataType)2, 4467 },
	{ (Il2CppRGCTXDataType)3, 15519 },
	{ (Il2CppRGCTXDataType)2, 5544 },
	{ (Il2CppRGCTXDataType)2, 4149 },
	{ (Il2CppRGCTXDataType)2, 4463 },
	{ (Il2CppRGCTXDataType)2, 2528 },
	{ (Il2CppRGCTXDataType)2, 4131 },
	{ (Il2CppRGCTXDataType)2, 4132 },
	{ (Il2CppRGCTXDataType)2, 4461 },
	{ (Il2CppRGCTXDataType)3, 15517 },
	{ (Il2CppRGCTXDataType)2, 4130 },
	{ (Il2CppRGCTXDataType)2, 4460 },
	{ (Il2CppRGCTXDataType)3, 15516 },
	{ (Il2CppRGCTXDataType)2, 3909 },
	{ (Il2CppRGCTXDataType)2, 4148 },
	{ (Il2CppRGCTXDataType)2, 3908 },
	{ (Il2CppRGCTXDataType)3, 47681 },
	{ (Il2CppRGCTXDataType)3, 14347 },
	{ (Il2CppRGCTXDataType)2, 3453 },
	{ (Il2CppRGCTXDataType)2, 4134 },
	{ (Il2CppRGCTXDataType)2, 4462 },
	{ (Il2CppRGCTXDataType)2, 4698 },
	{ (Il2CppRGCTXDataType)2, 4179 },
	{ (Il2CppRGCTXDataType)2, 4473 },
	{ (Il2CppRGCTXDataType)3, 15734 },
	{ (Il2CppRGCTXDataType)3, 24882 },
	{ (Il2CppRGCTXDataType)3, 24884 },
	{ (Il2CppRGCTXDataType)2, 836 },
	{ (Il2CppRGCTXDataType)3, 24883 },
	{ (Il2CppRGCTXDataType)3, 24892 },
	{ (Il2CppRGCTXDataType)2, 6426 },
	{ (Il2CppRGCTXDataType)2, 9472 },
	{ (Il2CppRGCTXDataType)3, 42689 },
	{ (Il2CppRGCTXDataType)3, 24893 },
	{ (Il2CppRGCTXDataType)2, 4241 },
	{ (Il2CppRGCTXDataType)2, 4519 },
	{ (Il2CppRGCTXDataType)3, 15533 },
	{ (Il2CppRGCTXDataType)3, 47646 },
	{ (Il2CppRGCTXDataType)2, 9515 },
	{ (Il2CppRGCTXDataType)3, 42798 },
	{ (Il2CppRGCTXDataType)3, 24885 },
	{ (Il2CppRGCTXDataType)2, 6425 },
	{ (Il2CppRGCTXDataType)2, 9459 },
	{ (Il2CppRGCTXDataType)3, 42673 },
	{ (Il2CppRGCTXDataType)3, 15532 },
	{ (Il2CppRGCTXDataType)3, 24886 },
	{ (Il2CppRGCTXDataType)3, 47645 },
	{ (Il2CppRGCTXDataType)2, 9502 },
	{ (Il2CppRGCTXDataType)3, 42733 },
	{ (Il2CppRGCTXDataType)3, 24899 },
	{ (Il2CppRGCTXDataType)2, 6427 },
	{ (Il2CppRGCTXDataType)2, 9489 },
	{ (Il2CppRGCTXDataType)3, 42717 },
	{ (Il2CppRGCTXDataType)3, 27011 },
	{ (Il2CppRGCTXDataType)3, 12435 },
	{ (Il2CppRGCTXDataType)3, 15534 },
	{ (Il2CppRGCTXDataType)3, 12434 },
	{ (Il2CppRGCTXDataType)3, 24900 },
	{ (Il2CppRGCTXDataType)3, 47647 },
	{ (Il2CppRGCTXDataType)2, 9528 },
	{ (Il2CppRGCTXDataType)3, 42875 },
	{ (Il2CppRGCTXDataType)3, 24913 },
	{ (Il2CppRGCTXDataType)2, 6429 },
	{ (Il2CppRGCTXDataType)2, 9517 },
	{ (Il2CppRGCTXDataType)3, 42800 },
	{ (Il2CppRGCTXDataType)3, 24914 },
	{ (Il2CppRGCTXDataType)2, 4244 },
	{ (Il2CppRGCTXDataType)2, 4522 },
	{ (Il2CppRGCTXDataType)3, 15538 },
	{ (Il2CppRGCTXDataType)3, 15537 },
	{ (Il2CppRGCTXDataType)2, 9474 },
	{ (Il2CppRGCTXDataType)3, 42691 },
	{ (Il2CppRGCTXDataType)3, 47653 },
	{ (Il2CppRGCTXDataType)2, 9516 },
	{ (Il2CppRGCTXDataType)3, 42799 },
	{ (Il2CppRGCTXDataType)3, 24906 },
	{ (Il2CppRGCTXDataType)2, 6428 },
	{ (Il2CppRGCTXDataType)2, 9504 },
	{ (Il2CppRGCTXDataType)3, 42735 },
	{ (Il2CppRGCTXDataType)3, 15536 },
	{ (Il2CppRGCTXDataType)3, 15535 },
	{ (Il2CppRGCTXDataType)3, 24907 },
	{ (Il2CppRGCTXDataType)2, 9473 },
	{ (Il2CppRGCTXDataType)3, 42690 },
	{ (Il2CppRGCTXDataType)3, 47652 },
	{ (Il2CppRGCTXDataType)2, 9503 },
	{ (Il2CppRGCTXDataType)3, 42734 },
	{ (Il2CppRGCTXDataType)3, 24920 },
	{ (Il2CppRGCTXDataType)2, 6430 },
	{ (Il2CppRGCTXDataType)2, 9530 },
	{ (Il2CppRGCTXDataType)3, 42877 },
	{ (Il2CppRGCTXDataType)3, 27012 },
	{ (Il2CppRGCTXDataType)3, 12437 },
	{ (Il2CppRGCTXDataType)3, 15540 },
	{ (Il2CppRGCTXDataType)3, 15539 },
	{ (Il2CppRGCTXDataType)3, 12436 },
	{ (Il2CppRGCTXDataType)3, 24921 },
	{ (Il2CppRGCTXDataType)2, 9475 },
	{ (Il2CppRGCTXDataType)3, 42692 },
	{ (Il2CppRGCTXDataType)3, 47654 },
	{ (Il2CppRGCTXDataType)2, 9529 },
	{ (Il2CppRGCTXDataType)3, 42876 },
	{ (Il2CppRGCTXDataType)3, 15529 },
	{ (Il2CppRGCTXDataType)3, 15530 },
	{ (Il2CppRGCTXDataType)3, 15541 },
	{ (Il2CppRGCTXDataType)3, 304 },
	{ (Il2CppRGCTXDataType)3, 303 },
	{ (Il2CppRGCTXDataType)2, 4230 },
	{ (Il2CppRGCTXDataType)2, 4511 },
	{ (Il2CppRGCTXDataType)3, 15531 },
	{ (Il2CppRGCTXDataType)2, 4267 },
	{ (Il2CppRGCTXDataType)2, 4551 },
	{ (Il2CppRGCTXDataType)3, 306 },
	{ (Il2CppRGCTXDataType)2, 1047 },
	{ (Il2CppRGCTXDataType)2, 1173 },
	{ (Il2CppRGCTXDataType)3, 302 },
	{ (Il2CppRGCTXDataType)3, 305 },
	{ (Il2CppRGCTXDataType)3, 339 },
	{ (Il2CppRGCTXDataType)2, 4233 },
	{ (Il2CppRGCTXDataType)2, 4513 },
	{ (Il2CppRGCTXDataType)3, 341 },
	{ (Il2CppRGCTXDataType)2, 832 },
	{ (Il2CppRGCTXDataType)2, 1181 },
	{ (Il2CppRGCTXDataType)3, 338 },
	{ (Il2CppRGCTXDataType)3, 340 },
	{ (Il2CppRGCTXDataType)3, 169 },
	{ (Il2CppRGCTXDataType)2, 8762 },
	{ (Il2CppRGCTXDataType)3, 39253 },
	{ (Il2CppRGCTXDataType)2, 4223 },
	{ (Il2CppRGCTXDataType)2, 4506 },
	{ (Il2CppRGCTXDataType)3, 39254 },
	{ (Il2CppRGCTXDataType)3, 171 },
	{ (Il2CppRGCTXDataType)2, 825 },
	{ (Il2CppRGCTXDataType)2, 1136 },
	{ (Il2CppRGCTXDataType)3, 168 },
	{ (Il2CppRGCTXDataType)3, 170 },
	{ (Il2CppRGCTXDataType)3, 362 },
	{ (Il2CppRGCTXDataType)3, 363 },
	{ (Il2CppRGCTXDataType)2, 8766 },
	{ (Il2CppRGCTXDataType)3, 39258 },
	{ (Il2CppRGCTXDataType)2, 4236 },
	{ (Il2CppRGCTXDataType)2, 4515 },
	{ (Il2CppRGCTXDataType)3, 39259 },
	{ (Il2CppRGCTXDataType)3, 365 },
	{ (Il2CppRGCTXDataType)2, 834 },
	{ (Il2CppRGCTXDataType)2, 1184 },
	{ (Il2CppRGCTXDataType)3, 361 },
	{ (Il2CppRGCTXDataType)3, 364 },
	{ (Il2CppRGCTXDataType)3, 261 },
	{ (Il2CppRGCTXDataType)2, 8764 },
	{ (Il2CppRGCTXDataType)3, 39255 },
	{ (Il2CppRGCTXDataType)2, 4226 },
	{ (Il2CppRGCTXDataType)2, 4508 },
	{ (Il2CppRGCTXDataType)3, 39256 },
	{ (Il2CppRGCTXDataType)3, 39257 },
	{ (Il2CppRGCTXDataType)3, 263 },
	{ (Il2CppRGCTXDataType)2, 827 },
	{ (Il2CppRGCTXDataType)2, 1162 },
	{ (Il2CppRGCTXDataType)3, 260 },
	{ (Il2CppRGCTXDataType)3, 262 },
	{ (Il2CppRGCTXDataType)3, 275 },
	{ (Il2CppRGCTXDataType)2, 829 },
	{ (Il2CppRGCTXDataType)3, 277 },
	{ (Il2CppRGCTXDataType)2, 1165 },
	{ (Il2CppRGCTXDataType)3, 274 },
	{ (Il2CppRGCTXDataType)3, 276 },
	{ (Il2CppRGCTXDataType)2, 10213 },
	{ (Il2CppRGCTXDataType)2, 2529 },
	{ (Il2CppRGCTXDataType)3, 14387 },
	{ (Il2CppRGCTXDataType)2, 3469 },
	{ (Il2CppRGCTXDataType)2, 10632 },
	{ (Il2CppRGCTXDataType)3, 39250 },
	{ (Il2CppRGCTXDataType)3, 39251 },
	{ (Il2CppRGCTXDataType)2, 4715 },
	{ (Il2CppRGCTXDataType)3, 39252 },
	{ (Il2CppRGCTXDataType)2, 741 },
	{ (Il2CppRGCTXDataType)2, 1138 },
	{ (Il2CppRGCTXDataType)3, 181 },
	{ (Il2CppRGCTXDataType)3, 33886 },
	{ (Il2CppRGCTXDataType)2, 7728 },
	{ (Il2CppRGCTXDataType)3, 33913 },
	{ (Il2CppRGCTXDataType)2, 1470 },
	{ (Il2CppRGCTXDataType)3, 2728 },
	{ (Il2CppRGCTXDataType)3, 33892 },
	{ (Il2CppRGCTXDataType)3, 12377 },
	{ (Il2CppRGCTXDataType)2, 866 },
	{ (Il2CppRGCTXDataType)3, 33887 },
	{ (Il2CppRGCTXDataType)2, 7723 },
	{ (Il2CppRGCTXDataType)3, 3199 },
	{ (Il2CppRGCTXDataType)2, 1494 },
	{ (Il2CppRGCTXDataType)2, 2710 },
	{ (Il2CppRGCTXDataType)3, 12395 },
	{ (Il2CppRGCTXDataType)3, 33888 },
	{ (Il2CppRGCTXDataType)3, 12372 },
	{ (Il2CppRGCTXDataType)3, 12373 },
	{ (Il2CppRGCTXDataType)3, 12371 },
	{ (Il2CppRGCTXDataType)3, 12374 },
	{ (Il2CppRGCTXDataType)2, 2706 },
	{ (Il2CppRGCTXDataType)2, 10270 },
	{ (Il2CppRGCTXDataType)3, 15527 },
	{ (Il2CppRGCTXDataType)3, 12376 },
	{ (Il2CppRGCTXDataType)2, 4063 },
	{ (Il2CppRGCTXDataType)3, 12375 },
	{ (Il2CppRGCTXDataType)2, 3916 },
	{ (Il2CppRGCTXDataType)2, 10206 },
	{ (Il2CppRGCTXDataType)2, 4181 },
	{ (Il2CppRGCTXDataType)2, 4474 },
	{ (Il2CppRGCTXDataType)3, 14366 },
	{ (Il2CppRGCTXDataType)2, 3462 },
	{ (Il2CppRGCTXDataType)3, 16386 },
	{ (Il2CppRGCTXDataType)3, 16387 },
	{ (Il2CppRGCTXDataType)3, 16392 },
	{ (Il2CppRGCTXDataType)2, 4709 },
	{ (Il2CppRGCTXDataType)3, 16389 },
	{ (Il2CppRGCTXDataType)3, 48797 },
	{ (Il2CppRGCTXDataType)2, 2714 },
	{ (Il2CppRGCTXDataType)3, 12425 },
	{ (Il2CppRGCTXDataType)1, 4054 },
	{ (Il2CppRGCTXDataType)2, 10219 },
	{ (Il2CppRGCTXDataType)3, 16388 },
	{ (Il2CppRGCTXDataType)1, 10219 },
	{ (Il2CppRGCTXDataType)1, 4709 },
	{ (Il2CppRGCTXDataType)2, 10630 },
	{ (Il2CppRGCTXDataType)2, 10219 },
	{ (Il2CppRGCTXDataType)2, 4188 },
	{ (Il2CppRGCTXDataType)2, 4479 },
	{ (Il2CppRGCTXDataType)3, 16393 },
	{ (Il2CppRGCTXDataType)3, 16391 },
	{ (Il2CppRGCTXDataType)3, 16390 },
	{ (Il2CppRGCTXDataType)2, 632 },
	{ (Il2CppRGCTXDataType)3, 12438 },
	{ (Il2CppRGCTXDataType)2, 845 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	203,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	66,
	s_rgctxIndices,
	303,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
