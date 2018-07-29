# PInvoke Demo

This project is an example on how to manually consume a native library from C#.

Running example:

1) Load PInvokeDemo.sln in Visual Studio
1) Build solution targeting the `x64` platform (e.g. `Debug|x64`)
    * The solution is designed to work seamlessly with `x64` - `x86` requires project modifications.
1) Set the `PInvoke_Core` or `PInvoke_Framework` project as the StartUp project
1) Press "F5" from within Visual Studio to debug

[PInvoke Documentation](https://docs.microsoft.com/en-us/cpp/dotnet/using-explicit-pinvoke-in-cpp-dllimport-attribute)