Start-Process python3 $args -RedirectStandardInput $((Get-Item $args).Basename + ".sample") -NoNewWindow -Wait