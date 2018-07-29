namespace PInvokeDemo
{
    using System;
    using System.Runtime.InteropServices;

    class Program
    {
        private class PInvokeNative
        {
            [DllImport(nameof(PInvokeNative))]
            public static extern double ComputeMean(int arrLen, int[] arr);
        }

        static void Main(string[] args)
        {
            var arr = new int[] { 2, 3, 4 };
            var mean = PInvokeNative.ComputeMean(arr.Length, arr);
            Console.WriteLine($"Mean = {mean}");
        }
    }
}
