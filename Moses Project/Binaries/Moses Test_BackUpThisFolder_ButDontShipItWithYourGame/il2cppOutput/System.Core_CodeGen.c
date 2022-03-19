#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x00000014 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000018 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001D System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001E System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001F TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000020 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000021 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000022 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000023 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000025 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000027 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000028 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000029 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002B System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002C System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003B System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000045 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004A System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004B System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004C TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004F System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000050 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000052 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000053 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000054 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000055 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000056 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000057 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000059 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000005B TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005D System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005F System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000060 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000061 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000062 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000063 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000064 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000065 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000066 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000067 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x00000068 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000006B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000006C System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000006D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000006E TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000006F System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000074 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000075 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000076 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000077 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000078 System.Void System.Linq.Set`1::Resize()
// 0x00000079 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000007A System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000007B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000007C System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007E System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000007F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000082 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000083 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000084 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000085 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000086 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000087 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000088 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000089 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000008A System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000008B System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000008C System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000008D System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000008E System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000008F System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000090 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000091 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000092 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000094 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000095 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000096 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000097 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000098 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000099 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000009A System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000009B System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000009C System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000009D System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000A0 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000A1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000A3 System.Int32 System.Collections.Generic.HashSet`1::RemoveWhere(System.Predicate`1<T>)
// 0x000000A4 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A7 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000A8 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000AB System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000AC T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000AD System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000AE System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[174] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
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
static const int32_t s_InvokerIndices[174] = 
{
	4243,
	4432,
	4432,
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
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[56] = 
{
	{ 0x02000004, { 78, 4 } },
	{ 0x02000005, { 82, 9 } },
	{ 0x02000006, { 93, 7 } },
	{ 0x02000007, { 102, 10 } },
	{ 0x02000008, { 114, 11 } },
	{ 0x02000009, { 128, 9 } },
	{ 0x0200000A, { 140, 12 } },
	{ 0x0200000B, { 155, 1 } },
	{ 0x0200000C, { 156, 2 } },
	{ 0x0200000D, { 158, 12 } },
	{ 0x0200000E, { 170, 11 } },
	{ 0x0200000F, { 181, 12 } },
	{ 0x02000010, { 193, 6 } },
	{ 0x02000011, { 199, 2 } },
	{ 0x02000013, { 201, 8 } },
	{ 0x02000015, { 209, 3 } },
	{ 0x02000016, { 214, 5 } },
	{ 0x02000017, { 219, 7 } },
	{ 0x02000018, { 226, 3 } },
	{ 0x02000019, { 229, 7 } },
	{ 0x0200001A, { 236, 4 } },
	{ 0x0200001B, { 240, 23 } },
	{ 0x0200001D, { 263, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 1 } },
	{ 0x06000009, { 31, 2 } },
	{ 0x0600000A, { 33, 2 } },
	{ 0x0600000B, { 35, 1 } },
	{ 0x0600000C, { 36, 1 } },
	{ 0x0600000D, { 37, 2 } },
	{ 0x0600000E, { 39, 1 } },
	{ 0x0600000F, { 40, 2 } },
	{ 0x06000010, { 42, 3 } },
	{ 0x06000011, { 45, 2 } },
	{ 0x06000012, { 47, 1 } },
	{ 0x06000013, { 48, 2 } },
	{ 0x06000014, { 50, 4 } },
	{ 0x06000015, { 54, 4 } },
	{ 0x06000016, { 58, 3 } },
	{ 0x06000017, { 61, 1 } },
	{ 0x06000018, { 62, 1 } },
	{ 0x06000019, { 63, 3 } },
	{ 0x0600001A, { 66, 3 } },
	{ 0x0600001B, { 69, 2 } },
	{ 0x0600001C, { 71, 2 } },
	{ 0x0600001D, { 73, 5 } },
	{ 0x0600002D, { 91, 2 } },
	{ 0x06000032, { 100, 2 } },
	{ 0x06000037, { 112, 2 } },
	{ 0x0600003D, { 125, 3 } },
	{ 0x06000042, { 137, 3 } },
	{ 0x06000047, { 152, 3 } },
	{ 0x0600007D, { 212, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[265] = 
{
	{ (Il2CppRGCTXDataType)2, 2428 },
	{ (Il2CppRGCTXDataType)3, 10139 },
	{ (Il2CppRGCTXDataType)2, 3914 },
	{ (Il2CppRGCTXDataType)2, 3353 },
	{ (Il2CppRGCTXDataType)3, 18620 },
	{ (Il2CppRGCTXDataType)2, 2541 },
	{ (Il2CppRGCTXDataType)2, 3360 },
	{ (Il2CppRGCTXDataType)3, 18655 },
	{ (Il2CppRGCTXDataType)2, 3355 },
	{ (Il2CppRGCTXDataType)3, 18632 },
	{ (Il2CppRGCTXDataType)2, 2429 },
	{ (Il2CppRGCTXDataType)3, 10140 },
	{ (Il2CppRGCTXDataType)2, 3937 },
	{ (Il2CppRGCTXDataType)2, 3365 },
	{ (Il2CppRGCTXDataType)3, 18670 },
	{ (Il2CppRGCTXDataType)2, 2568 },
	{ (Il2CppRGCTXDataType)2, 3373 },
	{ (Il2CppRGCTXDataType)3, 18834 },
	{ (Il2CppRGCTXDataType)2, 3369 },
	{ (Il2CppRGCTXDataType)3, 18745 },
	{ (Il2CppRGCTXDataType)2, 847 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1493 },
	{ (Il2CppRGCTXDataType)3, 7117 },
	{ (Il2CppRGCTXDataType)2, 849 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1507 },
	{ (Il2CppRGCTXDataType)3, 7122 },
	{ (Il2CppRGCTXDataType)3, 21577 },
	{ (Il2CppRGCTXDataType)2, 860 },
	{ (Il2CppRGCTXDataType)3, 160 },
	{ (Il2CppRGCTXDataType)2, 3002 },
	{ (Il2CppRGCTXDataType)3, 14914 },
	{ (Il2CppRGCTXDataType)3, 7971 },
	{ (Il2CppRGCTXDataType)3, 21541 },
	{ (Il2CppRGCTXDataType)2, 852 },
	{ (Il2CppRGCTXDataType)3, 92 },
	{ (Il2CppRGCTXDataType)3, 21596 },
	{ (Il2CppRGCTXDataType)2, 863 },
	{ (Il2CppRGCTXDataType)3, 189 },
	{ (Il2CppRGCTXDataType)2, 1036 },
	{ (Il2CppRGCTXDataType)3, 1072 },
	{ (Il2CppRGCTXDataType)3, 1073 },
	{ (Il2CppRGCTXDataType)2, 2542 },
	{ (Il2CppRGCTXDataType)3, 10755 },
	{ (Il2CppRGCTXDataType)3, 21552 },
	{ (Il2CppRGCTXDataType)2, 858 },
	{ (Il2CppRGCTXDataType)3, 146 },
	{ (Il2CppRGCTXDataType)2, 2181 },
	{ (Il2CppRGCTXDataType)2, 1674 },
	{ (Il2CppRGCTXDataType)2, 1798 },
	{ (Il2CppRGCTXDataType)2, 1926 },
	{ (Il2CppRGCTXDataType)2, 2182 },
	{ (Il2CppRGCTXDataType)2, 1675 },
	{ (Il2CppRGCTXDataType)2, 1799 },
	{ (Il2CppRGCTXDataType)2, 1927 },
	{ (Il2CppRGCTXDataType)2, 1800 },
	{ (Il2CppRGCTXDataType)2, 1928 },
	{ (Il2CppRGCTXDataType)3, 7118 },
	{ (Il2CppRGCTXDataType)2, 1284 },
	{ (Il2CppRGCTXDataType)2, 1784 },
	{ (Il2CppRGCTXDataType)2, 1785 },
	{ (Il2CppRGCTXDataType)2, 1924 },
	{ (Il2CppRGCTXDataType)3, 7116 },
	{ (Il2CppRGCTXDataType)2, 1783 },
	{ (Il2CppRGCTXDataType)2, 1923 },
	{ (Il2CppRGCTXDataType)3, 7115 },
	{ (Il2CppRGCTXDataType)2, 1673 },
	{ (Il2CppRGCTXDataType)2, 1797 },
	{ (Il2CppRGCTXDataType)2, 1672 },
	{ (Il2CppRGCTXDataType)3, 21519 },
	{ (Il2CppRGCTXDataType)3, 6501 },
	{ (Il2CppRGCTXDataType)2, 1375 },
	{ (Il2CppRGCTXDataType)2, 1787 },
	{ (Il2CppRGCTXDataType)2, 1925 },
	{ (Il2CppRGCTXDataType)2, 2033 },
	{ (Il2CppRGCTXDataType)3, 10141 },
	{ (Il2CppRGCTXDataType)3, 10143 },
	{ (Il2CppRGCTXDataType)2, 631 },
	{ (Il2CppRGCTXDataType)3, 10142 },
	{ (Il2CppRGCTXDataType)3, 10151 },
	{ (Il2CppRGCTXDataType)2, 2432 },
	{ (Il2CppRGCTXDataType)2, 3356 },
	{ (Il2CppRGCTXDataType)3, 18633 },
	{ (Il2CppRGCTXDataType)3, 10152 },
	{ (Il2CppRGCTXDataType)2, 1854 },
	{ (Il2CppRGCTXDataType)2, 1962 },
	{ (Il2CppRGCTXDataType)3, 7130 },
	{ (Il2CppRGCTXDataType)3, 21484 },
	{ (Il2CppRGCTXDataType)2, 3370 },
	{ (Il2CppRGCTXDataType)3, 18746 },
	{ (Il2CppRGCTXDataType)3, 10144 },
	{ (Il2CppRGCTXDataType)2, 2431 },
	{ (Il2CppRGCTXDataType)2, 3354 },
	{ (Il2CppRGCTXDataType)3, 18621 },
	{ (Il2CppRGCTXDataType)3, 7129 },
	{ (Il2CppRGCTXDataType)3, 10145 },
	{ (Il2CppRGCTXDataType)3, 21483 },
	{ (Il2CppRGCTXDataType)2, 3366 },
	{ (Il2CppRGCTXDataType)3, 18671 },
	{ (Il2CppRGCTXDataType)3, 10158 },
	{ (Il2CppRGCTXDataType)2, 2433 },
	{ (Il2CppRGCTXDataType)2, 3361 },
	{ (Il2CppRGCTXDataType)3, 18656 },
	{ (Il2CppRGCTXDataType)3, 10818 },
	{ (Il2CppRGCTXDataType)3, 5337 },
	{ (Il2CppRGCTXDataType)3, 7131 },
	{ (Il2CppRGCTXDataType)3, 5336 },
	{ (Il2CppRGCTXDataType)3, 10159 },
	{ (Il2CppRGCTXDataType)3, 21485 },
	{ (Il2CppRGCTXDataType)2, 3374 },
	{ (Il2CppRGCTXDataType)3, 18835 },
	{ (Il2CppRGCTXDataType)3, 10172 },
	{ (Il2CppRGCTXDataType)2, 2435 },
	{ (Il2CppRGCTXDataType)2, 3372 },
	{ (Il2CppRGCTXDataType)3, 18748 },
	{ (Il2CppRGCTXDataType)3, 10173 },
	{ (Il2CppRGCTXDataType)2, 1857 },
	{ (Il2CppRGCTXDataType)2, 1965 },
	{ (Il2CppRGCTXDataType)3, 7135 },
	{ (Il2CppRGCTXDataType)3, 7134 },
	{ (Il2CppRGCTXDataType)2, 3358 },
	{ (Il2CppRGCTXDataType)3, 18635 },
	{ (Il2CppRGCTXDataType)3, 21490 },
	{ (Il2CppRGCTXDataType)2, 3371 },
	{ (Il2CppRGCTXDataType)3, 18747 },
	{ (Il2CppRGCTXDataType)3, 10165 },
	{ (Il2CppRGCTXDataType)2, 2434 },
	{ (Il2CppRGCTXDataType)2, 3368 },
	{ (Il2CppRGCTXDataType)3, 18673 },
	{ (Il2CppRGCTXDataType)3, 7133 },
	{ (Il2CppRGCTXDataType)3, 7132 },
	{ (Il2CppRGCTXDataType)3, 10166 },
	{ (Il2CppRGCTXDataType)2, 3357 },
	{ (Il2CppRGCTXDataType)3, 18634 },
	{ (Il2CppRGCTXDataType)3, 21489 },
	{ (Il2CppRGCTXDataType)2, 3367 },
	{ (Il2CppRGCTXDataType)3, 18672 },
	{ (Il2CppRGCTXDataType)3, 10179 },
	{ (Il2CppRGCTXDataType)2, 2436 },
	{ (Il2CppRGCTXDataType)2, 3376 },
	{ (Il2CppRGCTXDataType)3, 18837 },
	{ (Il2CppRGCTXDataType)3, 10819 },
	{ (Il2CppRGCTXDataType)3, 5339 },
	{ (Il2CppRGCTXDataType)3, 7137 },
	{ (Il2CppRGCTXDataType)3, 7136 },
	{ (Il2CppRGCTXDataType)3, 5338 },
	{ (Il2CppRGCTXDataType)3, 10180 },
	{ (Il2CppRGCTXDataType)2, 3359 },
	{ (Il2CppRGCTXDataType)3, 18636 },
	{ (Il2CppRGCTXDataType)3, 21491 },
	{ (Il2CppRGCTXDataType)2, 3375 },
	{ (Il2CppRGCTXDataType)3, 18836 },
	{ (Il2CppRGCTXDataType)3, 7126 },
	{ (Il2CppRGCTXDataType)3, 7127 },
	{ (Il2CppRGCTXDataType)3, 7141 },
	{ (Il2CppRGCTXDataType)3, 163 },
	{ (Il2CppRGCTXDataType)3, 162 },
	{ (Il2CppRGCTXDataType)2, 1846 },
	{ (Il2CppRGCTXDataType)2, 1956 },
	{ (Il2CppRGCTXDataType)3, 7128 },
	{ (Il2CppRGCTXDataType)2, 1869 },
	{ (Il2CppRGCTXDataType)2, 1983 },
	{ (Il2CppRGCTXDataType)3, 165 },
	{ (Il2CppRGCTXDataType)2, 798 },
	{ (Il2CppRGCTXDataType)2, 861 },
	{ (Il2CppRGCTXDataType)3, 161 },
	{ (Il2CppRGCTXDataType)3, 164 },
	{ (Il2CppRGCTXDataType)3, 94 },
	{ (Il2CppRGCTXDataType)2, 3137 },
	{ (Il2CppRGCTXDataType)3, 16913 },
	{ (Il2CppRGCTXDataType)2, 1842 },
	{ (Il2CppRGCTXDataType)2, 1953 },
	{ (Il2CppRGCTXDataType)3, 16914 },
	{ (Il2CppRGCTXDataType)3, 96 },
	{ (Il2CppRGCTXDataType)2, 624 },
	{ (Il2CppRGCTXDataType)2, 853 },
	{ (Il2CppRGCTXDataType)3, 93 },
	{ (Il2CppRGCTXDataType)3, 95 },
	{ (Il2CppRGCTXDataType)3, 191 },
	{ (Il2CppRGCTXDataType)3, 192 },
	{ (Il2CppRGCTXDataType)2, 3139 },
	{ (Il2CppRGCTXDataType)3, 16915 },
	{ (Il2CppRGCTXDataType)2, 1849 },
	{ (Il2CppRGCTXDataType)2, 1958 },
	{ (Il2CppRGCTXDataType)3, 16916 },
	{ (Il2CppRGCTXDataType)3, 194 },
	{ (Il2CppRGCTXDataType)2, 629 },
	{ (Il2CppRGCTXDataType)2, 864 },
	{ (Il2CppRGCTXDataType)3, 190 },
	{ (Il2CppRGCTXDataType)3, 193 },
	{ (Il2CppRGCTXDataType)3, 148 },
	{ (Il2CppRGCTXDataType)2, 626 },
	{ (Il2CppRGCTXDataType)3, 150 },
	{ (Il2CppRGCTXDataType)2, 859 },
	{ (Il2CppRGCTXDataType)3, 147 },
	{ (Il2CppRGCTXDataType)3, 149 },
	{ (Il2CppRGCTXDataType)2, 3946 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)3, 6541 },
	{ (Il2CppRGCTXDataType)2, 1392 },
	{ (Il2CppRGCTXDataType)2, 4017 },
	{ (Il2CppRGCTXDataType)3, 16910 },
	{ (Il2CppRGCTXDataType)3, 16911 },
	{ (Il2CppRGCTXDataType)2, 2049 },
	{ (Il2CppRGCTXDataType)3, 16912 },
	{ (Il2CppRGCTXDataType)2, 564 },
	{ (Il2CppRGCTXDataType)2, 856 },
	{ (Il2CppRGCTXDataType)3, 120 },
	{ (Il2CppRGCTXDataType)3, 14902 },
	{ (Il2CppRGCTXDataType)2, 3003 },
	{ (Il2CppRGCTXDataType)3, 14915 },
	{ (Il2CppRGCTXDataType)2, 1037 },
	{ (Il2CppRGCTXDataType)3, 1074 },
	{ (Il2CppRGCTXDataType)3, 14908 },
	{ (Il2CppRGCTXDataType)3, 5291 },
	{ (Il2CppRGCTXDataType)2, 661 },
	{ (Il2CppRGCTXDataType)3, 14903 },
	{ (Il2CppRGCTXDataType)2, 2999 },
	{ (Il2CppRGCTXDataType)3, 1584 },
	{ (Il2CppRGCTXDataType)2, 1082 },
	{ (Il2CppRGCTXDataType)2, 1331 },
	{ (Il2CppRGCTXDataType)3, 5297 },
	{ (Il2CppRGCTXDataType)3, 14904 },
	{ (Il2CppRGCTXDataType)3, 5286 },
	{ (Il2CppRGCTXDataType)3, 5287 },
	{ (Il2CppRGCTXDataType)3, 5285 },
	{ (Il2CppRGCTXDataType)3, 5288 },
	{ (Il2CppRGCTXDataType)2, 1327 },
	{ (Il2CppRGCTXDataType)2, 3994 },
	{ (Il2CppRGCTXDataType)3, 7124 },
	{ (Il2CppRGCTXDataType)3, 5290 },
	{ (Il2CppRGCTXDataType)2, 1758 },
	{ (Il2CppRGCTXDataType)3, 5289 },
	{ (Il2CppRGCTXDataType)2, 1678 },
	{ (Il2CppRGCTXDataType)2, 3941 },
	{ (Il2CppRGCTXDataType)2, 1818 },
	{ (Il2CppRGCTXDataType)2, 1933 },
	{ (Il2CppRGCTXDataType)3, 6522 },
	{ (Il2CppRGCTXDataType)2, 1385 },
	{ (Il2CppRGCTXDataType)3, 7803 },
	{ (Il2CppRGCTXDataType)3, 7804 },
	{ (Il2CppRGCTXDataType)3, 7809 },
	{ (Il2CppRGCTXDataType)2, 2043 },
	{ (Il2CppRGCTXDataType)3, 7806 },
	{ (Il2CppRGCTXDataType)3, 22196 },
	{ (Il2CppRGCTXDataType)2, 1341 },
	{ (Il2CppRGCTXDataType)3, 5327 },
	{ (Il2CppRGCTXDataType)1, 1753 },
	{ (Il2CppRGCTXDataType)2, 3954 },
	{ (Il2CppRGCTXDataType)3, 7805 },
	{ (Il2CppRGCTXDataType)1, 3954 },
	{ (Il2CppRGCTXDataType)1, 2043 },
	{ (Il2CppRGCTXDataType)2, 4015 },
	{ (Il2CppRGCTXDataType)2, 3954 },
	{ (Il2CppRGCTXDataType)3, 14944 },
	{ (Il2CppRGCTXDataType)3, 7810 },
	{ (Il2CppRGCTXDataType)3, 7811 },
	{ (Il2CppRGCTXDataType)3, 7808 },
	{ (Il2CppRGCTXDataType)3, 7807 },
	{ (Il2CppRGCTXDataType)2, 481 },
	{ (Il2CppRGCTXDataType)3, 5340 },
	{ (Il2CppRGCTXDataType)2, 640 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	174,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	56,
	s_rgctxIndices,
	265,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
