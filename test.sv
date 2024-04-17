module test;

  // File handle
  string filename = "data.txt";
  int file_handle;

  // Data to append
  string data_to_append = "More data to append.\n";

  initial begin
    // Open the file in append mode
    file_handle = $fopen(filename, "a");

    if (file_handle == 0) begin
      $display("Error opening the file.");
      $finish;
    end

    // Append data to the file
    $fwrite(file_handle, "%s", data_to_append);

    // Close the file
    $fclose(file_handle);

    // Finish simulation
    $finish;
  end

endmodule
