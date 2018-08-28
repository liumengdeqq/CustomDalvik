# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.
add_library( # Sets the name of the library.
             native-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/native-lib.cpp
             src/main/cpp/dalvik/cutils/open_memstream.cpp
             src/main/cpp/dalvik/cutils/process_name.cpp
             src/main/cpp/dalvik/cutils/sched_policy.cpp
             src/main/cpp/dalvik/cutils/sockets.cpp
             src/main/cpp/dalvik/libdex/DexCatch.cpp
             src/main/cpp/dalvik/libdex/DexClass.cpp
             src/main/cpp/dalvik/libdex/DexDebugInfo.cpp
             src/main/cpp/dalvik/libdex/DexFile.cpp
             src/main/cpp/dalvik/libdex/DexInlines.cpp
             src/main/cpp/dalvik/libdex/DexOptData.cpp
             src/main/cpp/dalvik/libdex/DexOpcodes.cpp
             src/main/cpp/dalvik/libdex/DexProto.cpp
             src/main/cpp/dalvik/libdex/DexUtf.cpp
             src/main/cpp/dalvik/libdex/InstrUtils.cpp
             src/main/cpp/dalvik/libdex/Leb128.cpp
             src/main/cpp/dalvik/libdex/OptInvocation.cpp
             src/main/cpp/dalvik/libdex/sha1.cpp
             src/main/cpp/dalvik/libdex/SysUtil.cpp
             src/main/cpp/dalvik/libdex/ZipArchive.cpp
             src/main/cpp/dalvik/vm/AllocTracker.cpp
             src/main/cpp/dalvik/vm/Atomic.cpp
             src/main/cpp/dalvik/vm/AtomicCache.cpp
             src/main/cpp/dalvik/vm/BitVector.cpp
             src/main/cpp/dalvik/vm/CheckJni.cpp
             src/main/cpp/dalvik/vm/Ddm.cpp
             src/main/cpp/dalvik/vm/Debugger.cpp
             src/main/cpp/dalvik/vm/DvmDex.cpp
             src/main/cpp/dalvik/vm/Exception.cpp
             src/main/cpp/dalvik/vm/Hash.cpp
             src/main/cpp/dalvik/vm/IndirectRefTable.cpp
             src/main/cpp/dalvik/vm/InitRefs.cpp
             src/main/cpp/dalvik/vm/InlineNative.cpp
             src/main/cpp/dalvik/vm/Inlines.cpp
             src/main/cpp/dalvik/vm/Intern.cpp
             src/main/cpp/dalvik/vm/Jni.cpp
             src/main/cpp/dalvik/vm/JarFile.cpp
             src/main/cpp/dalvik/vm/LinearAlloc.cpp
             src/main/cpp/dalvik/vm/Misc.cpp
             src/main/cpp/dalvik/vm/Native.cpp
             src/main/cpp/dalvik/vm/PointerSet.cpp
             src/main/cpp/dalvik/vm/Profile.cpp
             src/main/cpp/dalvik/vm/RawDexFile.cpp
             src/main/cpp/dalvik/vm/ReferenceTable.cpp
             src/main/cpp/dalvik/vm/SignalCatcher.cpp
             src/main/cpp/dalvik/vm/StdioConverter.cpp
             src/main/cpp/dalvik/vm/Sync.cpp
             src/main/cpp/dalvik/vm/Thread.cpp
             src/main/cpp/dalvik/vm/UtfString.cpp
             src/main/cpp/dalvik/vm/alloc/Alloc.cpp
             src/main/cpp/dalvik/vm/alloc/CardTable.cpp
             src/main/cpp/dalvik/vm/alloc/HeapBitmap.cpp
             src/main/cpp/dalvik/vm/alloc/HeapDebug.cpp
             src/main/cpp/dalvik/vm/alloc/Heap.cpp
             src/main/cpp/dalvik/vm/alloc/DdmHeap.cpp
             src/main/cpp/dalvik/vm/alloc/Verify.cpp
             src/main/cpp/dalvik/vm/alloc/Visit.cpp
             	src/main/cpp/dalvik/vm/analysis/CodeVerify.cpp
             	src/main/cpp/dalvik/vm/analysis/DexPrepare.cpp
             	src/main/cpp/dalvik/vm/analysis/DexVerify.cpp
             	src/main/cpp/dalvik/vm/analysis/Liveness.cpp
             	src/main/cpp/dalvik/vm/analysis/Optimize.cpp
             	src/main/cpp/dalvik/vm/analysis/RegisterMap.cpp
             	src/main/cpp/dalvik/vm/analysis/VerifySubs.cpp
             	src/main/cpp/dalvik/vm/analysis/VfyBasicBlock.cpp
             	src/main/cpp/dalvik/vm/hprof/Hprof.cpp
             	src/main/cpp/dalvik/vm/hprof/HprofClass.cpp
             	src/main/cpp/dalvik/vm/hprof/HprofHeap.cpp
             	src/main/cpp/dalvik/vm/hprof/HprofOutput.cpp
             	src/main/cpp/dalvik/vm/hprof/HprofString.cpp
             	src/main/cpp/dalvik/vm/interp/Interp.cpp
             	src/main/cpp/dalvik/vm/interp/Stack.cpp
             	src/main/cpp/dalvik/vm/jdwp/ExpandBuf.cpp
             	src/main/cpp/dalvik/vm/jdwp/JdwpAdb.cpp
             	src/main/cpp/dalvik/vm/jdwp/JdwpConstants.cpp
             	src/main/cpp/dalvik/vm/jdwp/JdwpEvent.cpp
             	src/main/cpp/dalvik/vm/jdwp/JdwpHandler.cpp
             	src/main/cpp/dalvik/vm/jdwp/JdwpMain.cpp
             	src/main/cpp/dalvik/vm/jdwp/JdwpSocket.cpp
             	src/main/cpp/dalvik/vm/mterp/BitConvert.cpp
             	src/main/cpp/dalvik/vm/mterp/InterpC.cpp
             	src/main/cpp/dalvik/vm/mterp/Mterp.cpp
             	src/main/cpp/dalvik/vm/native/InternalNative.cpp
             	src/main/cpp/dalvik/vm/native/dalvik_bytecode_OpcodeInfo.cpp
             	src/main/cpp/dalvik/vm/native/dalvik_system_DexFile.cpp
             	src/main/cpp/dalvik/vm/native/dalvik_system_VMDebug.cpp
             	src/main/cpp/dalvik/vm/native/dalvik_system_VMRuntime.cpp
             	src/main/cpp/dalvik/vm/native/dalvik_system_VMStack.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_Class.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_Double.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_Float.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_Math.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_Object.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_Runtime.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_String.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_System.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_Throwable.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_VMClassLoader.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_VMThread.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_reflect_AccessibleObject.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_reflect_Array.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_reflect_Constructor.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_reflect_Field.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_reflect_Method.cpp
             	src/main/cpp/dalvik/vm/native/java_lang_reflect_Proxy.cpp
             	src/main/cpp/dalvik/vm/native/java_util_concurrent_atomic_AtomicLong.cpp
             	src/main/cpp/dalvik/vm/native/org_apache_harmony_dalvik_NativeTestTarget.cpp
             	src/main/cpp/dalvik/vm/native/org_apache_harmony_dalvik_ddmc_DdmServer.cpp
             	src/main/cpp/dalvik/vm/native/org_apache_harmony_dalvik_ddmc_DdmVmInternal.cpp
             	src/main/cpp/dalvik/vm/native/sun_misc_Unsafe.cpp
             	src/main/cpp/dalvik/vm/oo/AccessCheck.cpp
             	src/main/cpp/dalvik/vm/oo/Array.cpp
             	src/main/cpp/dalvik/vm/oo/Class.cpp
             	src/main/cpp/dalvik/vm/oo/Object.cpp
             	src/main/cpp/dalvik/vm/oo/Resolve.cpp
             	src/main/cpp/dalvik/vm/oo/TypeCheck.cpp
             	src/main/cpp/dalvik/vm/os/android.cpp
             	src/main/cpp/dalvik/vm/os/linux.cpp
             	src/main/cpp/dalvik/vm/reflect/Annotation.cpp
             	src/main/cpp/dalvik/vm/reflect/Proxy.cpp
             	src/main/cpp/dalvik/vm/reflect/Reflect.cpp
              )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       native-lib

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )